﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/PosixProfile.h>
#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>LOGICAL</code>.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline UpdateUserRequest& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline UpdateUserRequest& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline UpdateUserRequest& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline UpdateUserRequest& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline UpdateUserRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline UpdateUserRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline UpdateUserRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline UpdateUserRequest& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline UpdateUserRequest& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline UpdateUserRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline UpdateUserRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline UpdateUserRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline UpdateUserRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline UpdateUserRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline UpdateUserRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
