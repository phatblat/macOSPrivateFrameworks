//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ECGmailLabel <NSObject>
@property(readonly) BOOL isGmailStarredLabel;
@property(readonly) BOOL isGmailImportantLabel;
@property(readonly, copy, nonatomic) NSString *labelName;
@property(readonly, nonatomic) NSString *persistentID;
@end
