//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SignpostSupportObjectFilter : NSObject
{
    CDUnknownBlockType _filterBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void).cxx_destruct;
- (BOOL)passesObject:(id)arg1;
- (id)initWithFilterBlock:(CDUnknownBlockType)arg1;

@end

