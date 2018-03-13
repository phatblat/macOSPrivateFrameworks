//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionItem.h"

@class NSDate, NSString, NSURL;

@interface NSExtensionItem (STMResource)
+ (id)deleteItemAtURL:(id)arg1;
+ (long long)calculateSizeOfFolderAtPath:(id)arg1;
+ (long long)calculateSizeOfItemAtURL:(id)arg1;
+ (id)lastOpenedDateForURL:(id)arg1;
- (id)deleteResourceItem;
@property(retain, nonatomic) NSString *cancelButtonTitle;
@property(retain, nonatomic) NSString *confirmButtonTitle;
@property(retain, nonatomic) NSString *deleteMessage;
@property(retain, nonatomic) NSString *deleteTitle;
@property(nonatomic) BOOL hasBeenViewed;
@property(nonatomic) double percentViewed;
@property(nonatomic) BOOL hasViewedState;
@property(nonatomic, getter=isRevealable) BOOL revealable;
@property(nonatomic, getter=isDownloadable) BOOL downloadable;
@property(nonatomic, getter=isDeletable) BOOL deletable;
@property(retain, nonatomic) NSDate *dateLastOpened;
@property(retain, nonatomic) NSDate *dateModified;
@property(retain, nonatomic) NSDate *dateCreated;
@property(retain, nonatomic) NSString *versionString;
@property(retain, nonatomic) NSURL *URL;
- (BOOL)isEqualToExtension:(id)arg1;
- (id)initResourceItemWithFilePath:(id)arg1;
- (id)initResourceWithFileAtPath:(id)arg1;
- (id)initResourceItemWithFileURL:(id)arg1;
- (id)initResourceItemWithName:(id)arg1;
@end

