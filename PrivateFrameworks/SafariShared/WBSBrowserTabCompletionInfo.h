//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSUUID;

@interface WBSBrowserTabCompletionInfo : NSObject
{
    NSUUID *_uuid;
    NSUUID *_windowUUID;
    unsigned long long _tabIndex;
    NSURL *_url;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(readonly, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 url:(id)arg4 title:(id)arg5;

@end

