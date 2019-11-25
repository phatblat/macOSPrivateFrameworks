//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import "WFContentItemClass.h"

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass>
{
    NSArray *_extensionSubItems;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
@property(retain, nonatomic) NSArray *extensionSubItems; // @synthesize extensionSubItems=_extensionSubItems;
- (void).cxx_destruct;
- (BOOL)cachesSupportedTypes;
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)itemProvidersSupportType:(id)arg1;
- (id)name;
- (id)extensionItemName;
- (id)itemProviders;
- (id)itemProviderItems;
@property(readonly, nonatomic) NSExtensionItem *extensionItem;

@end

