//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCDiscretionaryWorkScheduler, NSMutableDictionary, NSProgress;

@interface MCProgressGroup : NSObject
{
    MCDiscretionaryWorkScheduler *_workScheduler;
    NSMutableDictionary *_progressBySlice;
    NSProgress *_parent;
}

@property(readonly, nonatomic) __weak NSProgress *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)completeAllProgress;
- (void)modifyCompletedBy:(long long)arg1 forSlice:(long long)arg2;
- (void)modifyTotalBy:(long long)arg1 forSlice:(long long)arg2;
@property(retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler;
- (id)init;
- (id)initWithParent:(id)arg1;

@end

