//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFAttachment.h"

#import "ICLegacyAttachment.h"

@class NSString;

@interface NFAttachment (ICLegacyAttachment) <ICLegacyAttachment>
- (void)setMimeType:(id)arg1;
- (BOOL)persistAttachmentData:(id)arg1 error:(id *)arg2;
- (id)typeUTI;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

