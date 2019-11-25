//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPassLibraryDataProvider.h"

@class NSString, PKPassLibrary;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider>
{
    PKPassLibrary *_library;
}

- (void).cxx_destruct;
- (void)removePass:(id)arg1;
- (id)peerPaymentPassUniqueID;
- (id)passWithUniqueID:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)paymentPasses;
@property(readonly, nonatomic) BOOL canAddPaymentPass;
- (id)initWithPassLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

