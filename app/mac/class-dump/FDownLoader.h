//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSOutputStream, NSString, NSURLSession, NSURLSessionDataTask;

@interface FDownLoader : NSObject <NSURLSessionDataDelegate>
{
    long long _tmpSize;
    long long _totalSize;
    float _progress;
    unsigned long long _state;
    CDUnknownBlockType _downLoadInfo;
    CDUnknownBlockType _stateChange;
    CDUnknownBlockType _progressChange;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    NSURLSession *_session;
    NSString *_downLoaderPath;
    NSString *_downLoadingrPath;
    NSOutputStream *_outputStream;
    NSURLSessionDataTask *_dataTask;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(copy, nonatomic) NSString *downLoadingrPath; // @synthesize downLoadingrPath=_downLoadingrPath;
@property(copy, nonatomic) NSString *downLoaderPath; // @synthesize downLoaderPath=_downLoaderPath;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType progressChange; // @synthesize progressChange=_progressChange;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType stateChange; // @synthesize stateChange=_stateChange;
@property(copy, nonatomic) CDUnknownBlockType downLoadInfo; // @synthesize downLoadInfo=_downLoadInfo;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)downLoadWithURL:(id)arg1 offset:(long long)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancleAndClean;
- (void)cancleCurrentTask;
- (void)resumeCurrentTask;
- (void)pauseCurrentTask;
- (void)downLoader:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setProgress:(float)arg1;
- (void)downLoader:(id)arg1 downLoadInfo:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

