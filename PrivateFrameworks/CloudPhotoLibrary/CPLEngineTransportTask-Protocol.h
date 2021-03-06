//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol CPLEngineTransportTask <NSObject>
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(nonatomic, getter=isBackgroundTask) BOOL backgroundTask;
@property(nonatomic, getter=isForcedTask) BOOL forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) BOOL highPriorityBackground;
@property(nonatomic) BOOL foreground;
- (void)cancel;
- (void)run;
@end

