#include "stdafx.h"
#include "CppUnitTest.h"

#include "pileInt.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(PileIntTests)
	{
	public:

		TEST_METHOD(creer_une_pile_vide)
		{
			PileInt pile;

			Assert::IsTrue(pile.estVide());
		}

		TEST_METHOD(empiler_un_int_devrait_l_ajouter_a_la_pile)
		{
			PileInt pile;

			pile.empiler(10);

			Assert::IsFalse(pile.estVide());
		}

		TEST_METHOD(depiler_un_int_devrait_le_supprimer_de_la_pile)
		{
			PileInt pile;

			pile.empiler(10);
			pile.depiler();

			Assert::IsTrue(pile.estVide());
		}

		TEST_METHOD(consulter_devrait_retourner_le_int_du_dessus_de_la_pile)
		{
			const int INT_ATTENDU = 10;
			PileInt pile;

			pile.empiler(INT_ATTENDU);
			int intObtenu = pile.consulter();

			Assert::AreEqual(INT_ATTENDU, intObtenu);
		}

		TEST_METHOD(consulter_tous_les_int_de_la_pile_devrait_les_retourner_dans_l_ordre_inverse_de_l_ajout)
		{
			PileInt pile;

			pile.empiler(1);
			pile.empiler(3);

			int dernierElement = pile.consulter();
			pile.depiler();
			int premierElement = pile.consulter();


			Assert::AreEqual(dernierElement, 3);
			Assert::AreEqual(premierElement, 1);
		}

		TEST_METHOD(depiler_une_pile_vide_devrait_lancer_une_exception)
		{
			//arrange
			bool exceptionThrown = false;
			PileInt pile;

			//action
			try
			{
				pile.depiler();
			}
			catch (std::runtime_error ex)
			{

				exceptionThrown = true;
			}

			//Assert
			Assert::IsTrue(exceptionThrown);
		}

		TEST_METHOD(consulter_une_pile_vide_devrait_lancer_une_exception)
		{
			//Arrange
			bool exceptionThrown = false;
			PileInt pile;

			//Action
			try
			{
				pile.consulter();
			}
			catch (std::runtime_error ex)
			{

				exceptionThrown = true;
			}

			//Assert
			Assert::IsTrue(exceptionThrown);
		}
	};
}
