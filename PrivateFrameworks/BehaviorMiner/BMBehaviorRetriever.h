//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMBehaviorStorage;

@interface BMBehaviorRetriever : NSObject
{
    BMBehaviorStorage *_storage;
}

@property(retain, nonatomic) BMBehaviorStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id *)arg4;
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3;
- (id)retrieveRulesWithFilters:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

