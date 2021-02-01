/*
 *  config_file_parser_extensions.h
 *
 *  Copyright 2014 Michael Zillgith
 *
 *  This file is part of libIEC61850.
 *
 *  libIEC61850 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libIEC61850 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  See COPYING file for the complete license text.
 */

#ifndef CONFIG_FILE_PARSER_EXTENSIONS_H_
#define CONFIG_FILE_PARSER_EXTENSIONS_H_

#include <libiec61850/iec61850_model.h>
#include "iec61850_model_extensions.h"

#ifdef __cplusplus
extern "C" {
#endif

LIB61850_API IedModel_extensions*
ConfigFileParser_createModelFromConfigFileEx_inputs(const char* filename,IedModel* iedModel);

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_FILE_PARSER_EXTENSIONS_H_ */
