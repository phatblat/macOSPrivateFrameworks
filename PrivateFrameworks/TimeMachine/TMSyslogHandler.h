//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeMachine/TMLoggingHandler.h>

@interface TMSyslogHandler : TMLoggingHandler
{
    int _facility;
}

@property int facility; // @synthesize facility=_facility;
- (int)_syslogLevelForRecord:(id)arg1;
- (void)handleMessage:(id)arg1 forRecord:(id)arg2;

@end

