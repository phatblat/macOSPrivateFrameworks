//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreDAVTaskGroup, NSError;

@interface CalCalDAVSynchronousTaskGroup : NSObject
{
    BOOL _completed;
    NSError *_error;
    CoreDAVTaskGroup *_taskGroup;
}

@property(retain, nonatomic) CoreDAVTaskGroup *taskGroup; // @synthesize taskGroup=_taskGroup;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)executeTaskGroup:(id)arg1;

@end

