//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MUIRemoteImageCollector, NSArray, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL;

@interface MUIWebDocument : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_html;
    NSMutableDictionary *_jsDocumentContext;
    BOOL _isEncrypted;
    BOOL _hasEncryptedDescendantPart;
    BOOL _isSigned;
    BOOL _hasBlockedMessageContent;
    NSArray *_attachments;
    long long _imageScale;
    Class _webAttachmentClass;
    NSArray *_signers;
    NSArray *_signerNames;
    CDUnknownBlockType _URLClickObserver;
    NSURL *_baseURL;
    NSDictionary *_dataDetectorsContext;
    NSError *_smimeError;
    long long _messageContentTypeToBlock;
    MUIRemoteImageCollector *_remoteImageCollector;
    unsigned long long _originalEncoding;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long originalEncoding; // @synthesize originalEncoding=_originalEncoding;
@property(retain, nonatomic) MUIRemoteImageCollector *remoteImageCollector; // @synthesize remoteImageCollector=_remoteImageCollector;
@property(nonatomic) long long messageContentTypeToBlock; // @synthesize messageContentTypeToBlock=_messageContentTypeToBlock;
@property(nonatomic) BOOL hasBlockedMessageContent; // @synthesize hasBlockedMessageContent=_hasBlockedMessageContent;
@property(retain, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(copy, nonatomic) NSDictionary *dataDetectorsContext; // @synthesize dataDetectorsContext=_dataDetectorsContext;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) CDUnknownBlockType URLClickObserver; // @synthesize URLClickObserver=_URLClickObserver;
@property(nonatomic) BOOL isSigned; // @synthesize isSigned=_isSigned;
@property(nonatomic) BOOL hasEncryptedDescendantPart; // @synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(copy, nonatomic) NSArray *signerNames; // @synthesize signerNames=_signerNames;
@property(copy, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(nonatomic) Class webAttachmentClass; // @synthesize webAttachmentClass=_webAttachmentClass;
@property(nonatomic) long long imageScale; // @synthesize imageScale=_imageScale;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
- (void).cxx_destruct;
- (id)attachmentForContentID:(id)arg1;
- (id)description;
- (id)_defaultDocumentHTML;
- (void)setValueInJsDocumentContext:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *jsDocumentContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_muiWebDocumentCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

