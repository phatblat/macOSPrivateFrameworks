//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions
{
    BOOL _performAvailablityCheck;
    long long _urgency;
    NSString *_volume;
}

@property(copy, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(nonatomic) long long urgency; // @synthesize urgency=_urgency;
@property(nonatomic) BOOL performAvailablityCheck; // @synthesize performAvailablityCheck=_performAvailablityCheck;
- (void).cxx_destruct;
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;
- (id)init;

@end

