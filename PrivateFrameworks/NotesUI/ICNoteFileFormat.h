//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICNoteFileFormat : NSObject
{
}

+ (BOOL)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id *)arg3;
+ (void)exportNote:(id)arg1 toURL:(id)arg2;
+ (id)pathExtension;
+ (id)fileUTType;
- (void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseFileURL:(id)arg1 newNoteBlock:(CDUnknownBlockType)arg2 updatedNoteBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 completedParsingBlock:(CDUnknownBlockType)arg5;
- (void)cancelParsing;
- (BOOL)canHandleFileURL:(id)arg1;
- (id)allowedFileTypes;

@end
