//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFDailyStatusEvent : WFEvent
{
    BOOL _installed;
    BOOL _sharingEnabled;
    BOOL _personalAutomationsEnabled;
    BOOL _homeAutomationsEnabled;
    NSString *_key;
}

+ (Class)codableEventClass;
@property(nonatomic) BOOL homeAutomationsEnabled; // @synthesize homeAutomationsEnabled=_homeAutomationsEnabled;
@property(nonatomic) BOOL personalAutomationsEnabled; // @synthesize personalAutomationsEnabled=_personalAutomationsEnabled;
@property(nonatomic) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) BOOL installed; // @synthesize installed=_installed;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

