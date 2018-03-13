//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class CoreDAVItem, NSString;

@interface CalDAVSetPropertyQueueableOperation : CalDAVCalendarQueueableOperation
{
    CoreDAVItem *_propPatchElement;
    NSString *_uri;
}

+ (void)initialize;
@property(retain) NSString *uri; // @synthesize uri=_uri;
@property(retain) CoreDAVItem *propPatchElement; // @synthesize propPatchElement=_propPatchElement;
- (void).cxx_destruct;
- (void)resolveError:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)performOperation;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 property:(id)arg4 value:(id)arg5 valueType:(id)arg6;

@end

