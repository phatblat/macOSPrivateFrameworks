//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogFormatter.h"

@class ContextWhitelistFilterLogFormatter, NSString;

@interface WDProtocolTraceFormatter : NSObject <DDLogFormatter>
{
    id <DDLogFormatter> _formatter;
    ContextWhitelistFilterLogFormatter *_filter;
}

- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (id)initWithContext:(int)arg1 formatter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

