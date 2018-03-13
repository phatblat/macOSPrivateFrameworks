//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PRSBaseResult.h"

@class NSArray, NSImage, NSString, NSURL, PRSActionButton;

@protocol PRSGenericResult <PRSBaseResult>
@property(retain) NSArray *card_sections;
@property int card_alignment;
@property(retain) NSURL *card_url;
@property(retain, nonatomic) PRSActionButton *action_button;
@property int thumbnail_align;
@property(retain, nonatomic) NSImage *thumbnail;
@property(retain, nonatomic) NSString *footnote;
@property(nonatomic) unsigned long long title_weight;
@property(nonatomic) unsigned long long title_size;
@property(nonatomic) unsigned long long title_maxlines;
@property BOOL section_scroll;
@end

