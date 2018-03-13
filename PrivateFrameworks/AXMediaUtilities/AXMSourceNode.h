//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionEngineNode.h>

#import "NSSecureCoding.h"

@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding>
{
    NSMutableArray *_nodeQueue_resultHandlers;
    BOOL _shouldProcessRemotely;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldProcessRemotely; // @synthesize shouldProcessRemotely=_shouldProcessRemotely;
- (void).cxx_destruct;
- (void)triggerWithContext:(id)arg1 cacheKey:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)produceImage:(id)arg1;
- (void)_nodeQueue_removeAllResultHandlers;
- (void)removeAllResultHandlers;
- (void)_nodeQueue_removeResultHandler:(CDUnknownBlockType)arg1;
- (void)removeResultHandler:(CDUnknownBlockType)arg1;
- (void)_nodeQueue_addResultHandler:(CDUnknownBlockType)arg1;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (id)resultHandlers;
- (void)nodeInitialize;

@end

