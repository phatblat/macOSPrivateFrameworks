//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol VCRenderDelegateProtocol
- (int)resizeRemoteVideoForUserID:(NSString *)arg1 outBuffer:(struct __CVBuffer *)arg2;
- (int)processCVPixelBuffer:(struct __CVBuffer *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 withHint:(NSNumber *)arg3;
@end

