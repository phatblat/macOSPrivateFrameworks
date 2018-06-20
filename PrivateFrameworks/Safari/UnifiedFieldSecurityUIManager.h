//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UnifiedFieldSecurityUIManager : NSObject
{
    NSArray *_certificateChain;
    NSString *_evCertificateOrganizationName;
    NSString *_hostName;
    id <UnifiedFieldSecurityUIManagerDelegate> _delegate;
}

+ (BOOL)shouldShowSecurityUIInUnifiedFieldForBrowserContentViewController:(id)arg1;
@property __weak id <UnifiedFieldSecurityUIManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_certificateTrustSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_showCertificateSheetWithHostname:(id)arg1 cerficiateChain:(id)arg2 evCertificateOrganizationName:(id)arg3 inWindow:(id)arg4;
- (void)showCertificateSheetInWindow:(id)arg1;
- (id)init;
- (id)initWithCertificateChain:(id)arg1 evCertificateOrganizationName:(id)arg2 hostName:(id)arg3;
- (id)initWithBrowserViewController:(id)arg1;

@end

