/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011-2016 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Application
   Trial1

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include "linearEqn.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{

	scalar a = 4;
	scalar b = 6;
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

	Foam::Info<< "The added sum is " << a+b << endl;
	Foam::Info<< "Now we will demo....." << endl;

	Foam::linearEqn eq1(2,7);

	Info<< "The value at x = 5 is " << eq1.value(5) << endl;

    return 0;
}


// ************************************************************************* //
