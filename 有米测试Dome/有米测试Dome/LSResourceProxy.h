//
//  LSResourceProxy.h
//  xckoomain
//
//  Created by xckoo on 2017/8/8.
//  Copyright © 2017年 xckoo. All rights reserved.
//

/* Generated by RuntimeBrowser
 Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <UIKit/UIKit.h>

@class LSApplicationProxy, NSArray, NSDictionary, NSString, NSURL;

@interface LSResourceProxy : NSObject {
    NSString *_boundApplicationIdentifier;
    NSURL *_boundContainerURL;
    NSURL *_boundDataContainerURL;
    NSString *_boundIconCacheKey;
    NSArray *_boundIconFileNames;
    BOOL _boundIconIsBadge;
    BOOL _boundIconIsPrerendered;
    NSDictionary *_boundIconsDictionary;
    NSURL *_boundResourcesDirURL;
    NSString *_localizedName;
    LSApplicationProxy *_typeOwner;
}

@property(readonly) BOOL boundIconIsBadge;
@property(readonly) NSDictionary * iconsDictionary;
@property(readonly) NSString * localizedName;

+ (CGSize)_applicationIconCanvasSize;
+ (int)_compareApplicationIconCanvasSize:(CGSize)arg1 withSize:(CGSize)arg2;

- (CGSize)_defaultStyleSize:(id)arg1;
- (struct { int x1; CGSize x2; }*)_iconDefinitionForSize:(CGSize)arg1 style:(id)arg2;
- (id)_iconForStyle:(id)arg1 size:(CGSize)arg2;
- (id)_iconForStyle:(id)arg1;
- (struct { int x1; CGSize x2; }*)_iconVariantDefinitions:(id)arg1;
- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 dataContainerURL:(id)arg4 boundResourcesDirectoryURL:(id)arg5 boundIconsDictionary:(id)arg6 boundIconCacheKey:(id)arg7 boundIconFileNames:(id)arg8 typeOwner:(id)arg9 boundIconIsPrerendered:(BOOL)arg10 boundIconIsBadge:(BOOL)arg11;
- (id)_initWithLocalizedName:(id)arg1;
- (CGSize)_largestImageSize:(id)arg1;
- (id)boundApplicationIdentifier;
- (id)boundContainerURL;
- (id)boundDataContainerURL;
- (id)boundIconCacheKey;
- (id)boundIconFileNames;
- (BOOL)boundIconIsBadge;
- (BOOL)boundIconIsPrerendered;
- (id)boundIconsDictionary;
- (id)boundResourcesDirectoryURL;
- (void)dealloc;
- (id)iconDataForStyle:(id)arg1 width:(int)arg2 height:(int)arg3 options:(unsigned int)arg4;
- (id)iconDataForVariant:(int)arg1;
- (id)iconStyleDomain;
- (id)iconsDictionary;
- (id)localizedName;
- (void)setBoundApplicationIdentifier:(id)arg1;
- (void)setBoundContainerURL:(id)arg1;
- (void)setBoundDataContainerURL:(id)arg1;
- (void)setBoundIconCacheKey:(id)arg1;
- (void)setBoundIconFileNames:(id)arg1;
- (void)setBoundIconIsBadge:(BOOL)arg1;
- (void)setBoundIconIsPrerendered:(BOOL)arg1;
- (void)setBoundIconsDictionary:(id)arg1;
- (void)setBoundResourcesDirectoryURL:(id)arg1;
- (void)setLocalizedName:(NSString *)arg1;
- (void)setTypeOwner:(id)arg1;
- (id)typeOwner;

@end
