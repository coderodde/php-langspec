<?php

/*
   +-------------------------------------------------------------+
   | Copyright (c) 2014 Facebook, Inc. (http://www.facebook.com) |
   +-------------------------------------------------------------+
*/

error_reporting(-1);

include_once 'Vehicle.inc';

abstract class Aircraft extends Vehicle
{
	public abstract function getMaxAltitude();
	// ...
}
