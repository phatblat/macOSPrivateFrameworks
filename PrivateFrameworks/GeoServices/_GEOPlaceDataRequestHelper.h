//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataRequestHelper : NSObject
{
    CDUnknownBlockType _requestHandler;
    NSDictionary *_identifierOrderMap;
    NSMutableSet *_remaningIdentifiers;
    NSMutableArray *_results;
}

+ (id)helperExpiredIdentifiers:(id)arg1;
+ (id)helperForHandler:(CDUnknownBlockType)arg1 identifiers:(id)arg2;
- (void).cxx_destruct;
- (BOOL)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (id)description;

@end

