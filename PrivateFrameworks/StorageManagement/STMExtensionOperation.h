//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StorageManagement/STMOperation.h>

@class NSArray, STMOpaqueExtension;

@interface STMExtensionOperation : STMOperation
{
    STMOpaqueExtension *_extension;
    NSArray *_inputItems;
    NSArray *_returnedItems;
    id <NSCopying> _requestIdentifier;
}

+ (id)resultsByRequestIdentifier;
+ (void)requestWithIdentifierWasInterrupted:(id)arg1;
+ (void)requestWithIdentifier:(id)arg1 didCompleteWithItems:(id)arg2;
+ (void)requestWithIdentifier:(id)arg1 didCancelWithError:(id)arg2;
+ (id)commandName;
@property(copy) id <NSCopying> requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy) NSArray *returnedItems; // @synthesize returnedItems=_returnedItems;
@property(copy) NSArray *inputItems; // @synthesize inputItems=_inputItems;
@property(retain) STMOpaqueExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (BOOL)tryFinishWithRequestIdentifier:(id)arg1;
- (void)requestDidFailToBeginWithError:(id)arg1;
- (void)requestDidBeginWithRequestIdentifier:(id)arg1;
- (void)finishWithItems:(id)arg1;
- (id)commandInputItem;
@property(readonly, copy, nonatomic) NSArray *allInputItems;
- (void)requestWasInterrupted:(id)arg1;
- (void)requestDidComplete:(id)arg1;
- (void)requestDidCancel:(id)arg1;
- (void)main;

@end

