//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MSVMultiCallback : NSObject
{
    NSMutableArray *_callbacks;
}

- (void).cxx_destruct;
- (void)invoke:(id)arg1;
- (void)removeCallback:(id)arg1;
- (void)addCallback:(id)arg1;

@end
