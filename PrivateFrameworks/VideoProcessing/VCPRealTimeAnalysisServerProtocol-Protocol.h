//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IOSurface;

@protocol VCPRealTimeAnalysisServerProtocol
- (void)requestAnalysis:(unsigned long long)arg1 ofIOSurface:(IOSurface *)arg2 withReply:(void (^)(NSDictionary *, NSError *))arg3;
@end

