//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, NWBrowser;

__attribute__((visibility("hidden")))
@interface NWRemoteBrowserWrapper : NSObject
{
    NSUUID *_clientID;
    NWBrowser *_browser;
}

@property(retain) NWBrowser *browser; // @synthesize browser=_browser;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;

@end

