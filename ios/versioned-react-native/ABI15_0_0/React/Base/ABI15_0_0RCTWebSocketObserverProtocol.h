/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <ReactABI15_0_0/ABI15_0_0RCTDefines.h>

#if ABI15_0_0RCT_DEV // Only supported in dev mode

@protocol ABI15_0_0RCTWebSocketObserverDelegate
- (void)didReceiveWebSocketMessage:(NSDictionary<NSString *, id> *)message;
@end

@protocol ABI15_0_0RCTWebSocketObserver
- (instancetype)initWithURL:(NSURL *)url;
@property (nonatomic, weak) id<ABI15_0_0RCTWebSocketObserverDelegate> delegate;
- (void)start;
- (void)stop;
@end

#endif
