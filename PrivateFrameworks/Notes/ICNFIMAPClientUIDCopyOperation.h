//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFIMAPClientUIDOperation.h>

@class NSDictionary, NSString;

@interface ICNFIMAPClientUIDCopyOperation : ICNFIMAPClientUIDOperation
{
    BOOL _shouldTryCreate;
    NSString *_destinationMailboxName;
    NSString *_destinationMailboxArgumentName;
    NSDictionary *_messageInfo;
}

@property BOOL shouldTryCreate; // @synthesize shouldTryCreate=_shouldTryCreate;
@property(copy) NSDictionary *messageInfo; // @synthesize messageInfo=_messageInfo;
@property(copy) NSString *destinationMailboxArgumentName; // @synthesize destinationMailboxArgumentName=_destinationMailboxArgumentName;
@property(copy) NSString *destinationMailboxName; // @synthesize destinationMailboxName=_destinationMailboxName;
- (void).cxx_destruct;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)detailsString;
- (id)activityString;
- (id)commandTypeString;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 destinationMailboxName:(id)arg3;

@end

