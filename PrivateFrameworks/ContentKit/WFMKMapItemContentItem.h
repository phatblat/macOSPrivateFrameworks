//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import "WFContentItemClass.h"

@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>
{
    CLLocation *_queryLocation;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2;
@property(retain, nonatomic) CLLocation *queryLocation; // @synthesize queryLocation=_queryLocation;
- (void).cxx_destruct;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;

@end
