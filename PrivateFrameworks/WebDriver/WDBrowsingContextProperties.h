//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WDBrowsingContext;

@interface WDBrowsingContextProperties : NSObject
{
    BOOL _active;
    WDBrowsingContext *_handle;
    NSString *_url;
    struct CGRect _windowFrame;
}

@property(readonly, nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) WDBrowsingContext *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)initWithBrowsingContext:(id)arg1 url:(id)arg2 active:(BOOL)arg3 windowFrame:(struct CGRect)arg4;
- (id)initWithJSONObject:(id)arg1;

@end

