//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGTSearchQueryResultItem.h"

@class NSArray, NSMutableDictionary, NSString;

@interface SGTMDQueryItem : NSObject <SGTSearchQueryResultItem>
{
    NSMutableDictionary *_attributesAndValues;
    NSArray *_matchingAttributes;
}

- (void).cxx_destruct;
- (id)valueForAttribute:(id)arg1;
@property(retain) NSArray *matchingAttributes; // @synthesize matchingAttributes=_matchingAttributes;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
