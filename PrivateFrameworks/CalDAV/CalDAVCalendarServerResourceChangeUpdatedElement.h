//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement
{
    BOOL _content;
    CoreDAVItem *_prop;
    NSMutableSet *_calendarChanges;
}

@property(retain, nonatomic) NSMutableSet *calendarChanges; // @synthesize calendarChanges=_calendarChanges;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(nonatomic) BOOL content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (id)init;

@end

