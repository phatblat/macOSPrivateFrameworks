//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class LiAddress;

@interface RDAttachmentCreationChange : RDUndoRedoChange
{
    LiAddress *_address;
    RDUndoRedoChange *_inTrashChange;
}

+ (id)attachmentChangeWithAttachment:(id)arg1;
+ (id)attachmentCreationChangesForAttachments:(id)arg1;
@property(retain, nonatomic) RDUndoRedoChange *inTrashChange; // @synthesize inTrashChange=_inTrashChange;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (id)initWithAttachment:(id)arg1;

@end

