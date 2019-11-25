//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject
{
    PXProgrammaticNavigationDestination *_destination;
    unsigned long long _options;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

