// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/public/common/url_constants.h"

#include "build/build_config.h"
#include "build/chromeos_buildflags.h"

namespace content {

// Before adding new chrome schemes please check with security@chromium.org.
// There are security implications associated with introducing new schemes.
const char kChromeDevToolsScheme[] = "devtools";
const char kChromeErrorScheme[] = "chrome-error";
const char kChromeUIScheme[] = "chrome";
const char kChromeUIUntrustedScheme[] = "chrome-untrusted";
const char kGuestScheme[] = "chrome-guest";
const char kViewSourceScheme[] = "view-source";
#if BUILDFLAG(IS_CHROMEOS_ASH)
const char kExternalFileScheme[] = "externalfile";
#endif
#if defined(OS_ANDROID)
const char kAndroidAppScheme[] = "android-app";
#endif
const char kGoogleChromeScheme[] = "googlechrome";

const char kChromeUIAppCacheInternalsHost[] = "appcache-internals";
const char kChromeUIIndexedDBInternalsHost[] = "indexeddb-internals";
const char kChromeUIBlobInternalsHost[] = "blob-internals";
const char kChromeUIBrowserCrashHost[] = "inducebrowsercrashforrealz";
const char kChromeUIConversionInternalsHost[] = "conversion-internals";
const char kChromeUIDinoHost[] = "dino";
const char kChromeUIGpuHost[] = "gpu";
const char kChromeUIHistogramHost[] = "histograms";
const char kChromeUIMediaInternalsHost[] = "media-internals";
const char kChromeUIMemoryExhaustHost[] = "memory-exhaust";
const char kChromeUINetworkErrorHost[] = "network-error";
const char kChromeUINetworkErrorsListingHost[] = "network-errors";
const char kChromeUIProcessInternalsHost[] = "process-internals";
const char kChromeUIResourcesHost[] = "resources";
const char kChromeUIServiceWorkerInternalsHost[] = "serviceworker-internals";
const char kChromeUITracingHost[] = "tracing";
const char kChromeUIUkmHost[] = "ukm";
const char kChromeUIWebRTCInternalsHost[] = "webrtc-internals";

// This error URL is loaded in normal web renderer processes, so it should not
// have a chrome:// scheme that might let it be confused with a WebUI page.
const char kUnreachableWebDataURL[] = "chrome-error://chromewebdata/";

const char kBlockedURL[] = "about:blank#blocked";

}  // namespace content
