//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

#import "NSSecureCoding.h"

@class MFEWSGetItemsResponseOperation, MFEWSSuppressReadReceiptsRequestOperation, NSArray, NSDictionary;

@interface MFEWSUpdateItemRequestOperation : MFEWSRequestOperation <NSSecureCoding>
{
    BOOL _messageType;
    NSArray *_EWSItemIds;
    NSDictionary *_flags;
    MFEWSGetItemsResponseOperation *_getItemsResponse;
    MFEWSSuppressReadReceiptsRequestOperation *_suppressReadReceiptsRequest;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) MFEWSSuppressReadReceiptsRequestOperation *suppressReadReceiptsRequest; // @synthesize suppressReadReceiptsRequest=_suppressReadReceiptsRequest;
@property(readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
@property(readonly, nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSDictionary *flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *itemsPriorToUpdate;
- (id)prepareRequest;
- (id)activityString;
- (void)setupOfflineResponse;
- (id)description;
- (void)_ewsUpdateItemRequestOperationCommonInitWithEWSItemIds:(id)arg1 messageType:(BOOL)arg2 flags:(id)arg3 errorHandler:(id)arg4;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEWSItemIds:(id)arg1 messageType:(BOOL)arg2 flags:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;

@end

