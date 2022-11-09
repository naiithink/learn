#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    CURL *curl = curl_easy_init();

    if (curl == NULL)
    {
        fprintf(stderr, "Init failed\n");
        return 1;
    }

    // Set options
    curl_easy_setopt(curl, CURLOPT_URL, "https://apple.com");

    // Perform out action
    CURLcode result = curl_easy_perform(curl);

    if (result != CURLE_OK)
        fprintf(stderr, "Error downloading: %s\n", curl_easy_strerror(result));

    curl_easy_cleanup(curl);
    return 0;
}
