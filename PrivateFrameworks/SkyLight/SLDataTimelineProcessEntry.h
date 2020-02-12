//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SLDataTimelineProcess.h"
#import "SLDataTimelineProcessWindows.h"
#import "SLXPCConvertible.h"

__attribute__((visibility("hidden")))
@interface SLDataTimelineProcessEntry : NSObject <SLDataTimelineProcess, SLDataTimelineProcessWindows, SLXPCConvertible>
{
    unsigned long long _windowScreenStates[4];
    int _pid;
}

+ (id)entryWithXPCObject:(id)arg1;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)createXPCObject;
- (id)initWithXPCObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long onScreenVisible;
@property(readonly, nonatomic) unsigned long long onScreenOccluded;
@property(readonly, nonatomic) unsigned long long offScreen;
@property(readonly, nonatomic) unsigned long long orderedOut;
@property(readonly, nonatomic) id <SLDataTimelineProcessWindows> windowData;

@end

