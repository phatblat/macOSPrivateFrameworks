//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBImageNoteContent, _INPBTextNoteContent;

@protocol _INPBNoteContent <NSObject>
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasText;
@property(retain, nonatomic) _INPBTextNoteContent *text;
@property(readonly, nonatomic) BOOL hasImage;
@property(retain, nonatomic) _INPBImageNoteContent *image;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

