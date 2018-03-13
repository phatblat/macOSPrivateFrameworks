//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface _DKEventStatsCollection : NSObject
{
    NSMutableDictionary *_eventCounterStats;
    NSString *_name;
}

+ (id)counterWithClass:(Class)arg1 collectionName:(id)arg2 eventName:(id)arg3 eventType:(id)arg4 eventTypePossibleValues:(id)arg5 hasResult:(BOOL)arg6 scalar:(BOOL)arg7;
+ (id)allEventStatsCollections;
+ (id)collectionWithName:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)allEventStatsCounters;
- (void)addEventStatsCounter:(id)arg1 withKey:(id)arg2;
- (id)eventStatsCounterWithKey:(id)arg1;
- (id)initWithName:(id)arg1;

@end

