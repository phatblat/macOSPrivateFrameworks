//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSNumber, NSString;

@protocol STMExtensionCallbackProtocol
- (void)extension:(NSString *)arg1 notifyTotalSpaceUsedDidChange:(NSNumber *)arg2;
- (void)extension:(NSString *)arg1 notifyTipsDidChange:(NSArray *)arg2;
- (void)extension:(NSString *)arg1 notifyResourcesDidChange:(NSArray *)arg2;
- (void)extension:(NSString *)arg1 partialResourceItems:(NSArray *)arg2;
@end
