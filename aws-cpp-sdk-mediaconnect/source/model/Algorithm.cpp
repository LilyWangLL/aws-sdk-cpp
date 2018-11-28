﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediaconnect/model/Algorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace AlgorithmMapper
      {

        static const int aes128_HASH = HashingUtils::HashString("aes128");
        static const int aes192_HASH = HashingUtils::HashString("aes192");
        static const int aes256_HASH = HashingUtils::HashString("aes256");


        Algorithm GetAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aes128_HASH)
          {
            return Algorithm::aes128;
          }
          else if (hashCode == aes192_HASH)
          {
            return Algorithm::aes192;
          }
          else if (hashCode == aes256_HASH)
          {
            return Algorithm::aes256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Algorithm>(hashCode);
          }

          return Algorithm::NOT_SET;
        }

        Aws::String GetNameForAlgorithm(Algorithm enumValue)
        {
          switch(enumValue)
          {
          case Algorithm::aes128:
            return "aes128";
          case Algorithm::aes192:
            return "aes192";
          case Algorithm::aes256:
            return "aes256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AlgorithmMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws