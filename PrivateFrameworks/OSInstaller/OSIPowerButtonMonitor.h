//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSIPowerButtonMonitor : NSObject
{
    id <OSIPowerButtonMonitorDelegate> _delegate;
}

@property __weak id <OSIPowerButtonMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_registerForPowerButtonHIDEvent;
- (id)initWithDelegate:(id)arg1;

@end
