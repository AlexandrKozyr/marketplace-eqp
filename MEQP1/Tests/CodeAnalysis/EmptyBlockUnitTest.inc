<?php

switch ($foo) {
    // Empty switch statement body
}

switch ($foo) {
    case 'bar':
        break;
    default:
        break;
}


if ($foo) {
    // Just a comment
} elseif ($bar) {
    // Yet another comment
} else {

}

if ($foo) {
    $foo = 'bar';
} else if ($bar) {
    $bar = 'foo';
}

for ($i = 0; $i < 10; $i++) {
    for ($j = 0; $j < 10; $j++) {
        // Just a comment
    }
}

foreach ($foo as $bar) {}

foreach ($foo as $bar) {
    $bar *= 2;
}

do {
    // Just a comment
    // Just another comment
} while ($foo);

do {
    while ($bar) {

    }
} while (true);

while ($foo) { /* Comment in the same line */}

while ($foo) {
    try {

    } catch (Exception $e) {
        echo $e->getTraceAsString();
    }
}

try {
    throw Exception('Error...');
} catch (Exception $e) {}

try {
    throw Exception('Error...');
} catch (Exception $e) {
    // TODO: Handle this exception later :-)
}

if (true) {} elseif (false) {}

class EmptyBlockTestInc { /*Empty class block*/ }

class EmptyBlockTestIncTrue
{
    public $field;
}

abstract class EmptyBlockTestIncAbstract { /*Empty class block*/ }

abstract class EmptyBlockTestIncTrueAbstract
{
    public $field;
}

function emptyBlock () { /*Empty function block*/ }

function emptyBlockT () { return true; }

interface EmptyBlockInterface { /*Empty interface block*/ }

interface EmptyBlockInterfaceTrue {
    public function test();
}

trait EmptyBlockTrait { /*Empty trait block*/ }

trait EmptyBlockTraitTrue {
    function test() {
        return true;
    }
}
