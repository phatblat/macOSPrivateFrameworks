//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUITokenAttachmentCell.h>

@class EKUIShareesGadget;

@interface EKUIShareeTokenAttachmentCell : EKUITokenAttachmentCell
{
    EKUIShareesGadget *_shareeGadget;
}

@property(retain) EKUIShareesGadget *shareeGadget; // @synthesize shareeGadget=_shareeGadget;
- (void).cxx_destruct;
- (BOOL)shouldShowToken;
- (id)stringForRepresentedObject;
- (id)imageForRepresentedObject;
- (id)statusIconForSharee:(id)arg1 isHighlighted:(BOOL)arg2 isSelected:(BOOL)arg3;
- (id)imageNameForStatus:(unsigned long long)arg1;
- (id)initCellForTokenField:(id)arg1;

@end

